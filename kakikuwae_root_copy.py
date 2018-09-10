from xml.etree.ElementTree import *
import xml.etree.ElementTree as ET
from xml.dom.minidom import parse, parseString
import xml.dom.minidom as minidom
import time
import math
import sys
import argparse
import pickle
import codecs
tree=ET.parse('a.xml')
#tree=ET.parse('test.xml')
root=tree.getroot()
n_root=ET.Element('n_root')

#st="<yanyan>\n"
line=0

def hantei(ele,ch_root):#forStatement
    global line
    a=ele.items()
    for b in a:
        if(b[0]=='lineno'):
            yan=int(b[1])
            #print(ele.tag,line)
    if(ele.tag=="forStatement"):
        sub=ET.SubElement(ch_root,'pragma')
        sub.set('lineno',str(yan+line))
        sub.text="acc karnels"
        line+=1
        #print("a",line,yan)
        

def itmm(ele,i_root):
    a=ele.items()
    for b in a:
        if(b[0]=='lineno'):
            asd=int(b[1])
            #b[1]=str(asd+line)
            global line
            #print(line+asd)
            i_root.set(b[0],str(line+asd))
        else:
            i_root.set(b[0],b[1])

def clook(ele,child_root):
    hantei(ele,child_root)
    child_root=ET.SubElement(child_root,ele.tag)
    if(ele.items()):
        itmm(ele,child_root)
    child_root.text=ele.text
    for e in list(ele):
        clook(e,child_root)
        


for ele in list(root):
    clook(ele,n_root)

string = ET.tostring(n_root, 'utf-8')
pretty_string = minidom.parseString(string).toprettyxml(indent='  ')
with open('output.xml','w')as f:
    #f.write(st)
    f.write(pretty_string)
#tree.write('output.xml')


