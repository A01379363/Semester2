import numpy as np
import matplotlib.pyplot as plt
from prettytable import PrettyTable


def f(x, y):
    return x + y


def runge_kutta_step(x_n, y_n, f, h):

    x_n_plus_1 = x_n + h

    k_1 = f(x_n, y_n)
    k_2 = f(x_n + h/2, y_n + (h/2)*k_1)
    k_3 = f(x_n + h/2, y_n + (h/2)*k_2)
    k_4 = f(x_n_plus_1, y_n + h*k_3)

    y_n_plus_1 = y_n + (h/6)*(k_1 + 2*k_2 + 2*k_3 + k_4)

    return x_n_plus_1, y_n_plus_1


def runge_kutta(x_0, y_0, x_goal, f, h):
    x_n = x_0
    y_n = y_0

    x_n_list = [x_0]
    y_n_list = [y_0]

    while x_n < x_goal:
        x_n_plus_1, y_n_plus_1 = runge_kutta_step(x_n, y_n, f, h)
        x_n, y_n = x_n_plus_1, y_n_plus_1
        x_n_list.append(x_n)
        y_n_list.append(y_n)

    return x_n_list, y_n_list


x_0 = 0
y_0 = 1
h = 0.1
x_goal = 1


x_list, y_list = runge_kutta(x_0, y_0, x_goal, f, h)

mytable = PrettyTable()

for x, y in zip(x_list, y_list):
    mytable.add_row(["{:0.2f}".format(x), "{:0.6f}".format(y)])

print(mytable)
