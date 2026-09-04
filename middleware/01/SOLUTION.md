To run the solution, generate the client stub code in folder `/01` first using

```
python -m grpc_tools.protoc -I./protos --python_out=. --grpc_python_out=. ./protos/activity.proto
python -m grpc_tools.protoc -I./protos --python_out=. --grpc_python_out=. ./protos/kulajda.proto
python -m grpc_tools.protoc -I./protos --python_out=. --grpc_python_out=. ./protos/guesser.proto
python -m grpc_tools.protoc -I./protos --python_out=. --grpc_python_out=. ./protos/monitor.proto
```

The solution itself is implemented in files `part[1-4]_sol.py`. The first two parts use synchronous solution - second one uses wrapper to automatically insert credentials metadata. Last two parts are implemented using async, cause I felt it is cleaner for the streams.

The logic of all parts is pretty straight-forward - all of them do basically what is told to do in the assignments. The most complicated part is part 3 which uses binary search for guessing.
