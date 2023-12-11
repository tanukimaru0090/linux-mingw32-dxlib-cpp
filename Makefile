CC=/usr/bin/i686-w64-mingw32-g++
BUILD_DIR=build
TARGET=$(BUILD_DIR)/main
OBJC=$(BUILD_DIR)/main.o
SRC=src/main.cc
OPT=-static
LIBS=-lDxLib -lDxUseCLib  -lDxDrawFunc  -ljpeg  -lpng  -lzlib  -ltiff  -ltheora_static  -lvorbis_static  -lvorbisfile_static        -logg_static  -lbulletdynamics  -lbulletcollision  -lbulletmath  -lopusfile  -lopus  -lsilk_common  -lcelt
LIB_DIR=./DxLib/
all:TARGET
TARGET:OBJC
	$(CC) $(OBJC) $(OPT) -L$(LIB_DIR) $(LIBS) -o $(TARGET)
OBJC:SRC
	$(CC) -c $(SRC) -o $(OBJC)
SRC:
clean:
	rm $(BUILD_DIR)/*.o $(TARGET).exe
