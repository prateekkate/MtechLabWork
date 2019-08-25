import matplotlib.pyplot as plt

#bubble Sort
y=[0.000003,0.000004,0.000003,0.000003,0.000004,0.000004,0.000004,0.000004,0.000002,0.000004]
y1=[0.0031,0.0162,0.0328,0.060,0.0965,0.1402,0.1960,0.2724,0.3429,0.4361]
y2=[0.0085,0.0201,0.0370,0.0652,0.0967,0.1387,0.1720,0.2416,0.2927,0.3687]

#insertion sort
#y=[0.000004,0.000003,0.000003,0.000004,0.000005,0.000005,0.000004,0.000004,0.000004,0.000003]
#y1=[0.0029,0.0096,0.0145,0.0234,0.0364,0.0488,0.0657,0.0804,0.0992,0.1321]
#y2=[0.0043,0.0145,0.0275,0.0401,0.0634,0.0872,0.1245,0.1540,0.1962,0.2452]

x=[1000,2000,3000,4000,5000,6000,7000,8000,9000,10000]

plt.plot(x,y,'r-',label='Ascending Order Data')
plt.plot(x,y1,'b-',label='Random Order Data')
plt.plot(x,y2,'g-',label='Descending Order Data')
plt.legend(loc='upper left')
plt.ylabel('Time in seconds')
plt.xlabel('Size of inputs')

plt.title('Execution time analysis of Bubble Sort')


plt.show()



