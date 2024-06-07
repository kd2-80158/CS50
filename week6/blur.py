#PIL - Python Imaging Library
#If it's not install then - brew install pillow
from PIL import Image, ImageFilter

before = Image.open("Saurabh.jpeg")
after = before.filter(ImageFilter.BoxBlur(10))
after.save("out.jpeg")