num_0044
=
int
(
input
())
a_0044
=
[]
cube_0044
=
lambda
x_0044
:
x_0044
*
x_0044
*
x_0044
for
i_0044
in
range
(
num_0044
):
if
i_0044
<=
1
:
a_0044
.
append
(
i_0044
)
else
:
f_0044
=
a_0044
[
i_0044
-
2
]
+
a_0044
[
i_0044
-
1
]
a_0044
.
append
(
f_0044
)
print
(
list
(
map
(
cube_0044
,
a_0044
)))