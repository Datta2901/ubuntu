class Street:
    def __init__(self, name, L):
        self.name = name
        self.L = L
        self.traffic_light = TrafficLight(self)
    
    def __str__(self):
        return self.name


class Intersection:
    def __init__(self, id):
        self.id = id
        self.streets = []
        self.schedular = Schedular(self)

    def add_street(self, street):
        self.streets.append(street)
        self.schedular.add(street.traffic_light)

    def run(self):
        self.schedular.execute()
    

class TrafficLight:
    def __init__(self, street):
        self.queue = []
        self.street = street
    
    def length(self):
        return len(self.queue)

    def add(self, car):
        self.queue.append(car)

    def remove(self, car):
        return self.queue.pop()

    def green(self):
        car = self.remove()
        car.move()

    def __gt__(self, other):
        if self.length() >= other.length():
            return True
        else:
            return False
    
    def __lt__(self, other):
        if self.length() <= other.length():
            return True
        else:
            return False


class Car:
    def __init__(self, path):
        self.location = path[-1]
        self.moving = False
        self.path = path
        self.time_left = 0
        
    def move(self):
        self.path.pop()
        self.moving = True
        self.location = self.path[-1]
        self.time_left = self.location.L
    
    def update(self):
        self.time_left -= 1
        if self.time_left == 0:
            self.moving = False
            return True


class Schedular:
    def __init__(self, intersection):
        self.traffic_lights = []
        self.log = {}
        self.intersection = intersection

    def execute(self):
        to_green = max(self.traffic_lights)
        to_green.green()
        self.log_use(to_green.street)
    
    def log_use(self, street):
        if street in self.log.items():
            self.log[street] += 1
        else:
            self.log[street] = 1

    def add(self, traffic_light):
        self.traffic_lights.append(traffic_light)

def main():
    car_list, intersection_list = import_value()
    t = 0
    while t <= 6:
        for car in car_list:
            if car.moving:
                car.update()    


def import_value():
    '''
        list of cars with path
        streets with name and time L
    '''
    int_1 = Intersection(0)
    a = Street("a", 2)
    b = Street("b", 2)
    c = Street("c", 2)
    int_1.add_street(a)
    int_1.add_street(b)
    int_1.add_street(c)
    one = Car([a, b, c])
    car_list = []
    intersection_list = []
    intersection_list.append(int_1)
    car_list.append(one)
    for car in car_list:
        car.location.traffic_light.add(car)
    return car_list, intersection_list

    
if __name__ == "__main__":
    main()