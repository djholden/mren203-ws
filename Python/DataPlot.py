#! /usr/bin/env python3
import matplotlib.pyplot as plt
import matplotlib.animation as anim
import time
import numpy as np
from random import randint


fig = plt.figure()
ax1 = fig.add_subplot(1, 1, 1)

def animate(i):
    x_data = [1, 2, 3, 4]
    y_data = [10, 20, 30, 40]
    y_data.append(50)
    time.sleep(1)
    ax1.clear()
    ax1.plot(x_data, y_data)
    plt.pause(0.001)

ani = anim.FuncAnimation(fig=fig, func=animate, interval=1000)
plt.show()


# class PlotManager():
#     def __init__(self):
        
#         self.x_data = [10, 20, 30, 40]
#         self.y_data = [1, 2, 3, 4]

#         self.fig, self.ax = plt.subplots()
#         self.anim = anim.FuncAnimation(fig=self.fig, func=self.update, frames=40)

#     def set_data(self, x_axis, y_axis):

#         plt.plot(x_axis, y_axis)

#     def update(self, frame):
#         # for each frame, update the data stored on each artist.
#         x = self.x_data[:frame]
#         y = self.y_data[:frame]

#         # update the scatter plot:
#         data = np.stack([x, y]).T
#         scat.set_offsets(data)

#         # update the line plot:
#         line2.set_xdata(t[:frame])
#         line2.set_ydata(z2[:frame])
#         return (scat, line2)

# if __name__ == '__main__':
#     plot = PlotManager()
#     plot.refresh()
#     time.sleep(1)
#     plot.set_data([10, 20, 30, 40], [4, 3, 2, 1])
#     plot.refresh()
