import random
import sys

N = 1000
atest = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j']

def write_attr(f, alist):
	s = '<e';
	for a in alist:
		s += ' '+ a+'=""'
	s += '/>'
	f.write(s)

def write_xml(f, n):
	f.write('<?xml version="1.0"?>\n')
	f.write('<d>')
	a = atest[0:n]
	n = 0
	while(n < N):
		random.shuffle(a)
		write_attr(f, a)
		n += 1
	f.write('</d>\n')

def write_dtd(f, n):
	a = atest[0:n]
	f.write('<!ELEMENT d(e*)>\n')
	f.write('<!ELEMENT e(EMPTY)>\n')
	f.write('<!ATTLIST e')
	for aa in a:
		f.write(' ' + aa + ' CDATA #REQUIRED')
	f.write('>\n')

def write_dtd2(f, n):
	f.write('<!ELEMENT d(e*)>\n')
	f.write('<!ELEMENT e(EMPTY)>\n')
	f.write('<!ATTLIST e')
	c = 0
	for aa in atest:
		f.write(' ' + aa + ' CDATA ')
		if(c < n): 
			f.write('#REQUIRED')
		else:
			f.write('#IMPLIED')
		c += 1
        f.write('>\n')

def write_file(file, n):
	f = open(file+'_E' + str(n) + '.xml', 'w')
	write_xml(f, n)
	f.close()
	f = open(file+'_R' + str(n) + '.dtd', 'w')
	write_dtd(f, n)
	f.close()
	f = open(file+'_O' + str(n) + '.dtd', 'w')
	write_dtd2(f, n)
	f.close()

for x in range(1, 10):
	write_file("dtdattr", x)

