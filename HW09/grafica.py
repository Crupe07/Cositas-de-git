import numpy as np
import matplotlib.pyplot as plt

Archivo = np.loadtxt("datos.txt")
X = Archivo[:,0] 
Y = Archivo[:,1] 
plt.plot(X , Y)
plt.ylabel("h(m)")
plt.xlabel("t (s)")
plt.title("lanzamiento Vertical")
plt.savefig('grafica.pdf')





