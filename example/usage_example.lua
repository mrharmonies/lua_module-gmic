require ("lua_gmic")
print ("test image with dimension of 500x500 output to testimage.png")
gmic ("testimage2d 500 -o testimage.png") -- test image with dimension of 500x500 output to testimage.png
print ("cartoon effect. output to solat2.jpg")
gmic ("solat.jpg +cartoon 3,80,15 -o solat2.jpg") -- cartoon effect. output to solat2.jpg
print ("fire edges effect. output to lion2.jpg")
gmic ("lion.jpg +fire_edges , -o lion2.jpg") -- fire edges effect. output to lion2.jpg
print ("generate a rorschach and save it to ror.png")
gmic ("400,400 rorschach 3% -o ror.png") -- generate a rorschach and save it to ror.png
print ("-------------------------------")
print ("End of example. Check your folder and see the results :)")
