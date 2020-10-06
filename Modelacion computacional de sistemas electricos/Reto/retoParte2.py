import numpy as np
import matplotlib.pyplot as plt

plt.style.use('ggplot')

# Constantes
eps_0 = 8.8542e-12
k_e = 1/(4*np.pi*eps_0)
q = 2e-6

# Dimensiones de grafica

grid_min = -20
grid_max = 20
N = abs(grid_min-grid_max)+1

x = np.linspace(grid_min, grid_max, N)
y = np.linspace(grid_min, grid_max, N)
X, Y = np.meshgrid(x, y)

Ex = np.zeros((N, N))
Ey = np.zeros((N, N))


def getField(X, Y, q, q_loc, k_e):
    X_new = X-(q_loc[0])
    Y_new = Y-(q_loc[1])

    r = np.sqrt(X_new**2 + Y_new**2)
    angles = np.arctan2(Y_new, X_new)

    Ex = k_e*(q/r)*np.cos(angles)
    Ey = k_e*(q/r)*np.sin(angles)

    return Ex, Ey


# Rango de las cargas colocadas en x
qloc_x_range = np.linspace(-5, 5, 501)
# En que valor de 'y' van a ser puestas
qloc_y = -5
qloc_y2 = 5

for i, qloc_x in enumerate(qloc_x_range):
    new_Ex, new_Ey = getField(X, Y, q, [qloc_x, qloc_y], k_e)
    new_Ex2, new_Ey2 = getField(X, Y, -q, [0, (qloc_x/5)+6], k_e)

    Ex += new_Ex + new_Ex2
    Ey += new_Ey + new_Ey2


# Magnitudes
mags = np.sqrt(Ex**2 + Ey**2)

# Vectores Unitarios
ex = Ex/mags
ey = Ey/mags


fig, ax = plt.subplots(figsize=(7, 7))
ax.quiver(X, Y, ex, ey)
for qloc_x in qloc_x_range:
    ax.scatter(qloc_x, qloc_y, c='red', s=100)
for qloc_x in qloc_x_range:
    ax.scatter(0, (qloc_x/5)+6, c='blue', s=100)

ax.axis([grid_min, grid_max, grid_min, grid_max])
ax.set_aspect('equal', 'box')

plt.show()
