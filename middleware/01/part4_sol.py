import asyncio
import grpc
import monitor_pb2 as monitor
import monitor_pb2_grpc

    
async def run_measurement():        
    async with grpc.aio.insecure_channel('lab.d3s.mff.cuni.cz:6001') as channel:
        stub = monitor_pb2_grpc.NoisySensorStub(channel)
        stream = stub.MonitorMeasurements(monitor.MonitorMeasurementsRequest(),metadata=[('sis-login', 'bendaja1')])

        measurements = 30
        temperature = 0
        for m in range(measurements):
            res = await stream.read()
            temperature += res.temperature
            print(f"measurement {m+1}: \t reads {res.temperature},\t cumulative average: {temperature/(m + 1)}")

        temperature /= measurements
        
        stream.cancel()

        res = await stub.SubmitTemperatureEstimate(monitor.TemperatureEstimate(temperature = temperature),metadata=[('sis-login', 'bendaja1')])
        if res.success:
            print(res.instructions)
        else:
            print(":(")

        


asyncio.run(run_measurement())