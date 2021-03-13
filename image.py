import imageio
import sys
import numpy as np

frame1 = imageio.imread('/home/moxi/code/megaproj/imgscrt/up1.png')
frame2 = imageio.imread('/home/moxi/code/megaproj/imgscrt/up2.png')
frame1.shape
frame2.shape

with open('up1.txt', 'w') as outfile:
    for data_slice in frame1:
        np.savetxt(outfile, data_slice, fmt='%-6.f')

with open('up2.txt', 'w') as outfile:
    for data_slice in frame2:
        np.savetxt(outfile, data_slice, fmt='%-6.f')
