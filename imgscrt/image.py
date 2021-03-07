import imageio
import sys
import numpy as np

frame1 = imageio.imread('left1.png')
frame2 = imageio.imread('left2.png')
frame1.shape
frame2.shape

with open('left2.txt', 'w') as outfile:
    for data_slice in frame2:
        np.savetxt(outfile, data_slice, fmt='%-6.f')
