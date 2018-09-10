import xml.etree.ElementTree as ET
import xml.dom.minidom as minidom

root = ET.Element('root')

sub = ET.SubElement(root, 'sub')
bb = ET.SubElement(root, 'aa')

bb.text='text'

subsub = ET.SubElement(sub, 'subsub')
subsub.set('key', 'value')
subsub.text = 'text'

subsub2 = ET.SubElement(sub, 'subsub2')
subsub2.set('key2', 'value2')
subsub2.text = 'text2'

string = ET.tostring(root, 'utf-8')
pretty_string = minidom.parseString(string).toprettyxml(indent='  ')

with open('test.xml', 'w') as f:
    f.write(pretty_string)
