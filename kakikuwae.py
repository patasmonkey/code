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



# coding: utf-8 

tree=ET.parse('a.xml')
root=tree.getroot()
met=root.find("globalDeclarations")

#print(met.tag)
#for child in met:
#    print(child.tag)

#e=root.find(".//forStatement")
st=""
string=st.encode('utf-8')
for e in root.findall(".//body"):
    string+=ET.tostring(e,'utf-8')
    #print(e.tag)
    child=e
    #for child in e:
    if(child.tag=="forStatement"):
        sub=ET.SubElement(e,'pragma')
        sub.set('lineno',"\"")
        sub.text="acc karnels"
        string+=ET.tostring(sub,'utf-8')
        #print(child.tag)
        #print("\n")

pretty_string = minidom.parseString(string).toprettyxml(indent='  ')
with open('output.xml','w')as f:
    f.write(pretty_string)
#tree.write('output.xml')
