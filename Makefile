APP = LZ-family

LIB_NAME = liblz

OBJ = obj
SRC = source

FLAGS = -Wall

LIB_PATH = $(OBJ)/$(LIB_NAME).a

APP_SRC = $(shell find . -name 'main.cpp')
APP_OBJ = $(APP_SRC:%.cpp=%.o)

LIB_SRC = $(shell find $(SRC) -name "*.cpp")
LIB_OBJ = $(LIB_SRC:$(SRC)/%.cpp=$(OBJ)/%.o)

DEPS = $(APP_OBJ:.o=.d) $(LIB_OBJ:.o=.d)

.PHONY: $(APP)

-include $(DEPS)

$(APP): FOLDER $(APP_OBJ) $(LIB_PATH)
	g++ $(FLAGS) $(APP_OBJ) $(LIB_PATH) -o $@

FOLDER:
	mkdir -p obj

$(LIB_PATH): $(LIB_OBJ)
	ar rcs $@ $^

$(OBJ)/%.o: $(SRC)/%.cpp
	g++ $(FLAGS) -c $< -o $@

.PHONY: clear
clear:
	rm -f -r $(OBJ)
	rm -f *.o
	rm -f $(APP)