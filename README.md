# Native application of Android Binder mechanism - two-way communication

Taken from: <https://blog.csdn.net/tankai19880619/article/details/21224151>

## Steps to build

Cannot build for Android Pie (9.x). Binder API changed and need some modifications

```bash

```

## Run

```bash

./server
./client

```

## Result

```
I/        (  563): ServiceManager: 0xd750
D/        (  565): ==========================================================
D/        (  565): TK---->>>>>>Itestbinder.cpp>>>>Bptestbinder::setcallback
D/        (  563): TK---->>>>>>testbinder.cpp>>>>testbinder::onTransact
D/        (  563): TK---->>>>>>Itestbinder.cpp>>>>Bntestbinder::onTransact
D/        (  563): TK---->>>>>>Itestbinder.cpp>>>>Bntestbinder::onTransact>>SET_CALLBACK
D/        (  563): TK---->>>>>>testbinder.cpp>>>>testbinder::setcallback
D/        (  565): ==========================================================
D/        (  565): TK---->>>>>>Itestbinder.cpp>>>>Bptestbinder::testinterface
D/        (  563): TK---->>>>>>testbinder.cpp>>>>testbinder::onTransact
D/        (  563): TK---->>>>>>Itestbinder.cpp>>>>Bntestbinder::onTransact
D/        (  563): TK---->>>>>>Itestbinder.cpp>>>>Bntestbinder::onTransact>>TEST_INTERFACE
D/        (  563): TK---->>>>>>testbinder.cpp>>>>testbinder::testinterface
D/        (  563): ==========================================================
D/        (  563): TK---->>>>>>Icallback.cpp>>>>Bpcallback::notifyCallback
D/        (  565): TK---->>>>>>callback.cpp>>>>callback::onTransact
D/        (  565): TK---->>>>>>Icallback.cpp>>>>Bncallback::onTransact
D/        (  565): TK---->>>>>>Icallback.cpp>>>>Bncallback::onTransact>>NOTIFY_CALLBACK
D/        (  565): TK---->>>>>>callback.cpp>>>>callback::notifyCallback
D/        (  565): TK-------->>>result is 5
```
