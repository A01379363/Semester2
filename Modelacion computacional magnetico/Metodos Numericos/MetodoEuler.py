import numpy as np
import matplotlib.pyplot as plt


def euler_step(x_n, y_n, f, h):

    y_n_plus_1 = y_n + h*f(x_n, y_n)
    x_n_plus_1 = x_n + h

    return x_n_plus_1, y_n_plus_1


def f(x, y):
    return x + (1/5)*y


def euler_method(x_0, y_0, x_goal, f, h):
    x_n = x_0
    y_n = y_0

    x_n_list = [x_0]
    y_n_list = [y_0]

    while x_n < x_goal:
        x_n_plus_1, y_n_plus_1 = euler_step(x_n, y_n, f, h)
        x_n, y_n = x_n_plus_1, y_n_plus_1
        x_n_list.append(x_n)
        y_n_list.append(y_n)

    return x_n_list, y_n_list


x_0 = 0
y_0 = -3
h = 1
x_goal = 5

print(euler_method(x_0, y_0, x_goal, f, h))
