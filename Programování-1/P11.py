def copy(inp, outp):
    f = open(inp, "r")
    text = f.read()
    f.close()
    f = open(outp, "w")
    f.write(text)
    f.close()


copy("in.txt", "out.txt")
