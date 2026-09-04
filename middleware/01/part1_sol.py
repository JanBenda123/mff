import grpc
import activity_pb2
import activity_pb2_grpc
def run():
    with grpc.insecure_channel('lab.d3s.mff.cuni.cz:6001') as channel:
        stub = activity_pb2_grpc.LabActivityStub(channel)
        response = stub.StartHere(activity_pb2.StartHereRequest(sis_login='bendaja1'))
        print("Greeter client received: " + response.instructions)

run()