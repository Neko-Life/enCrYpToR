CC_ARGS = g++ -MMD

SRC = base64.cpp encrypt.cpp decrypt.cpp example.cpp

O = $(SRC:.cpp=.o)

D = $(SRC:.cpp=.d)

OUT = example.out

include $(D)

all: $(O)
	$(CC_ARGS) $(O) -o $(OUT)

$(D): $(SRC)
	$(CC_ARGS) -c $(@:.d=.cpp) -o $(@:.d=.o)

clean:
	rm $(O) $(D) $(OUT)
