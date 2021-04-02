import random
import time

import speech_recognition as sr

def recognize_speech_from_mic(recognizer, microphone):
    if not isinstance(recognizer, sr.Recognizer):
        raise TypeError("`recognizer` must be `Recognizer` instance")
    if not isinstance(microphone, sr.Microphone):
        raise TypeError("`microphone` must be `Microphone` instance")
    with microphone as source:
        recognizer.adjust_for_ambient_noise(source)
        audio = recognizer.listen(source)
    response = {
        "success": True,
        "error": None,
        "transcription": None
    }
    try:
        response["transcription"] = recognizer.recognize_google(audio)
    except sr.RequestError:
        response["success"] = False
        response["error"] = "API unavailable"
    except sr.UnknownValueError:
        response["error"] = "Unable to recognize speech"
    return response


if _name_ == "_main_":
    recognizer = sr.Recognizer()
    microphone = sr.Microphone()
    guess = recognize_speech_from_mic(recognizer, microphone)
    if guess["transcription"]:
        print()
    if not guess["success"]:
        print()
    if guess["error"]:
        print("ERROR: {}".format(guess["error"]))
        print()
    print("You said: {}".format(guess["transcription"]))