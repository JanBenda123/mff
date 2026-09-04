import sys
import torch
from PIL import Image
from torchvision import transforms
import csv
import numpy

sys.path.append("/home/bednarek/repos/SimpleNet_Pytorch/imagenet")
import simplenet

def print_model():
    model = simplenet.simplenetv1_small_m2_05()

    i = 0
    for layer in model.features:
        print("features.",i,"=",layer)
        i = i+1
    #    print(layer_name,"[",end='')
    #    print(layer_data,end='')
    #    print("]")

def print_weights():
    checkpoint = torch.load("tmp/simplenetv1_small_m2_05-ca4b3e2b.pth", map_location="cpu",)

    for layer_name, layer_tensor in checkpoint.items():
        print(layer_name,"[",end='')
        for dim in layer_tensor.shape:
            print(" ",dim,end='')
        print("]")
        layer_array = layer_tensor.numpy()
        #print("size=", layer_array.size(), layer_array.element_size())
        fname = layer_name+".bin"
        file = open(fname,"wb")
        #file.write(layer_storage)
        layer_array.tofile(file)
        file.close()

def run_model():
    print("Evaluating...")
    model.eval()

    print("Example download...")
    # Download an example image from the pytorch website
    import urllib
    url, filename = ("https://github.com/pytorch/hub/raw/master/images/dog.jpg", "dog.jpg")
    try: urllib.URLopener().retrieve(url, filename)
    except: urllib.request.urlretrieve(url, filename)

    print("Sample execution...")
    # sample execution (requires torchvision)
    from PIL import Image
    from torchvision import transforms
    input_image = Image.open(filename)
    preprocess = transforms.Compose([
        transforms.Resize(256),
        transforms.CenterCrop(224),
        transforms.ToTensor(),
        transforms.Normalize(mean=[0.485, 0.456, 0.406], std=[0.229, 0.224, 0.225]),
    ])
    input_tensor = preprocess(input_image)
    input_batch = input_tensor.unsqueeze(0) # create a mini-batch as expected by the model

    print("Running...")
    with torch.no_grad():
        output = model(input_batch)

    print("Printing...")
    # Tensor of shape 1000, with confidence scores over Imagenet's 1000 classes
    print(output[0])
    # The output has unnormalized scores. To get probabilities, you can run a softmax on it.
    probabilities = torch.nn.functional.softmax(output[0], dim=0)
    print(probabilities)

    print("Printing categories...")
    # Read the categories
    with open("imagenet_classes.txt", "r") as f:
        categories = [s.strip() for s in f.readlines()]
    # Show top categories per image
    top5_prob, top5_catid = torch.topk(probabilities, 5)
    for i in range(top5_prob.size(0)):
        print(categories[top5_catid[i]], top5_prob[i].item())

def convert_images():
    fname = "input.bin"
    file = open(fname,"wb")
    for i in range(1,2000):
        filename = "/home/bednarek/repos/imagenet/ILSVRC2012_val_{0:08}.JPEG".format(i)
        input_image = Image.open(filename)
        converted_image = input_image.convert("RGB")
        preprocess = transforms.Compose([
            transforms.Resize(256),
            transforms.CenterCrop(224),
            transforms.ToTensor(),
            transforms.Normalize(mean=[0.485, 0.456, 0.406], std=[0.229, 0.224, 0.225]),
        ])
        input_tensor = preprocess(converted_image)

        #print("[",end='')
        #for dim in input_tensor.shape:
        #    print(" ",dim,end='')
        #print("]")

        input_array = input_tensor.numpy()
        input_array.tofile(file)

    file.close()

smmap = dict()
smfile = open("LOC_synset_mapping.first.csv","r")
smreader = csv.reader(smfile)
i = -1
for smrow in smreader:
    if i >= 0:
        smmap[smrow[0]] = i
    i = i + 1
smfile.close()

vsmap = dict()
vsfile = open("LOC_val_solution.first.csv","r")
vsreader = csv.reader(vsfile)
for vsrow in vsreader:
    if vsrow[0] != "ImageId":
        vsmap[vsrow[0]] = vsrow[1]
vsfile.close()

vmmap = dict()
for v, s in vsmap.items():
    vmmap[v] = smmap[s]

vlist = sorted(vmmap.keys())
mlist = list()
for v in vlist:
    mlist.append(vmmap[v])

mlist2 = mlist[0:1999]

marray = numpy.array(mlist2,dtype=numpy.int32)
#print(numpy.size(marray))

fname = "bin/input-class.bin"
file = open(fname,"wb")
marray.tofile(file)
file.close()
