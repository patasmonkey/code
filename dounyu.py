import xml.etree.ElementTree as ET
from xml.etree.ElementTree import *

tree=ET.parse('a.xml')
root=tree.getroot()
#root=ET.fromstring(a_string)
print(root.tag)
print(root.attrib)
for child in root:
    print(child.tag, child.attrib)

for i in root:
    print(i)
print(root.find(".//intConstant").tag)

for e in root.findall(".//declarations"):
    print(e.tag)
#for e in root.getiterator():
#    print(e.tag)
print("yansu")

for e in root.getiterator("body"):
    print(e.tag)
print("yansu")

for e in list(root):
    print(e.tag)
print("yansu")

for e in root.getiterator("assignExpr"):
    for f in list(e):
        print(f.text)

def iterparent(elem):
    for parent in elem.getiterator():
        for child in parent:
            yield parent, child

for p,c in iterparent(root):
    print(c.tag+":"+p.tag)

parent_map=dict((c,p)for p in tree.getiterator() for c in p)
for k in parent_map.keys():
    print("a"+k.tag+":"+parent_map.get(k).tag)

for fall in root.getiterator("basicType"):
    new_rank=fall
    new_rank.tag="YANSU"
    print(new_rank.items())
    print(new_rank.keys())
    print(new_rank.attrib)
    print(new_rank.get("is_const"))
    #new_rank.get("is_const")="2"
    print("OK")

tree.write('output.xml')

#parser = ET.XMLPullParser(['start', 'end'])
#parser.feed('<mytag>sometext')
#list(parser.read_events())
#[('start', <Element 'mytag' at 0x7fa66db2be58>)]

