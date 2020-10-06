import numpy as np
import matplotlib.pyplot as plt
plt.style.use('ggplot')


mu_0 = 4*np.pi*10e-7

r0 = [0, 0]
m = [0, 0.1]

x = np.linspace(-1, 1, 20)
y = np.linspace(-1, 1, 20)

X, Y = np.meshgrid(x, y)

X_new = X - r0[0]
Y_new = Y - r0[1]

const = mu_0/(4*np.pi)
mag_XY = np.sqrt(X_new**2+Y_new**2)

X_unit = X_new/mag_XY
Y_unit = Y_new/mag_XY

r = np.sqrt(X_new**2+Y_new**2)
m_dot_R = m[0]*X_unit+m[1]*Y_unit
B_x = const*((3*X_unit*m_dot_R-m[0])/r**3)
B_y = const*((3*Y_unit*m_dot_R-m[1])/r**3)

mag_B = np.sqrt(B_x**2+B_y**2)

plt.figure(figsize=(16, 8))

plt.subplot(1, 2, 1)
plt.quiver(X, Y, B_x/mag_B, B_y/mag_B)
plt.title('Vectores Unitarios del Campo Magnético')

plt.subplot(1, 2, 2)
plt.streamplot(X, Y, B_x, B_y)
plt.title('Lineas de trayectoria del campo Magnético')
plt.show()
