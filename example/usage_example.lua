require ("lua_gmic")
gmic("testimage2d 500 -o testimage.png") -- test image with dimension of 500x500 output to testimage.png
gmic("solat.jpg +cartoon 3,80,15 -o solat2.jpg") -- cartoon effect. output to solat2.jpg
gmic("lion.jpg +fire_edges , -o lion2.jpg") -- fire edges effect. output to lion2.jpg
