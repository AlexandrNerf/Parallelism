
ifeq ($(DOUBLE), 1)
USE_DOUBLE=1
else
USE_DOUBLE=0
endif

result: res.cpp
	g++ -lm res.cpp -o result -D USE_DOUBLE=$(USE_DOUBLE)
