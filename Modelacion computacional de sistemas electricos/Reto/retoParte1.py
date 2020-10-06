import numpy as np
import matplotlib.pyplot as plt

plt.style.use('ggplot')

N = 51
grid_min = -2.5
grid_max = 2.5

x = np.linspace(grid_min, grid_max, N)
y = np.linspace(grid_min, grid_max, N)
X, Y = np.meshgrid(x, y)

eps_0 = 8.8542e-12
Ke = 1/(4*np.pi*eps_0)

Ex_list = []
Ey_list = []
loc_list = []


def crearCarga(q, q_loc):
    X_new = X-(q_loc[0])
    Y_new = Y-(q_loc[1])

    r = np.sqrt(X_new**2+Y_new**2)
    angles = np.arctan2(Y_new, X_new)

    Ex = (Ke*q*np.cos(angles))/r**2
    Ey = (Ke*q*np.sin(angles))/r**2

    Ex_list.append(Ex)
    Ey_list.append(Ey)
    loc_list.append(q_loc)


# Carga 1
q_loc = [0, 0]
crearCarga(2e-6, q_loc)
# Carga 2
q2_loc = [0.5, 0]
crearCarga(-4e-6, q2_loc)
# Carga 3
q3_loc = [0.25, 0.5]
crearCarga(7e-6, q3_loc)

Ex_res = sum(Ex_list)
Ey_res = sum(Ey_list)

mags = np.sqrt(Ex_res**2+Ey_res**2)

Ex_unit = Ex_res/mags
Ey_unit = Ey_res/mags

# Creamos una figura y eje con plt.subplots()
fig, ax = plt.subplots(figsize=(7, 7))
# Agregamos al eje (ax) las flechas de los vectores con plt.quiver()
ax.quiver(X, Y, Ex_unit, Ey_unit)
# Dibujamos en el eje (ax) la carga puntual usando plt.scatter()
for i in range(len(loc_list)):
    ax.scatter(loc_list[i][0], loc_list[i][1], c='red', s=100)

# Configuramos las dimensiones del eje y el aspecto
ax.axis([grid_min, grid_max, grid_min, grid_max])
ax.set_aspect('equal', 'box')

plt.show()
