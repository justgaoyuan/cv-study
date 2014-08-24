#my first Makefile example
override LIBS += -lopencv_core\
		-lopencv_imgproc\
		-lopencv_highgui
CFLAGS = 

SRC_DIR = ./src
SRC_FILE=$(wildcard *.cpp ./src/*cpp)
DEPS = $(patsubst %.cpp, %.o, $(SRC_FILE))

main_name = cv_study
all : ${main_name}

$(DEPS) : $(SRC_FILE)
	@echo "  [compiling] $<"
	@$(CXX) -c -o $@ $<

cv_study : ${DEPS}
	@echo "  [output ] $@"
	@$(CXX) -o $@ $^ ${LIBS}

clean :
	@rm $(DEPS) ${main_name}