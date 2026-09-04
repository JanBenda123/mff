import asyncio
import grpc
import guesser_pb2 as g
import guesser_pb2_grpc

    
async def play_game():        
    async with grpc.aio.insecure_channel('lab.d3s.mff.cuni.cz:6001') as channel:
        stub = guesser_pb2_grpc.GuessTheNumberStub(channel)
        stream = stub.Play(metadata=[('sis-login', 'bendaja1')])
        while True:
            upper = 1_000_000
            lower = 1
            while True:
                guess = (upper+lower) // 2
                await stream.write(g.Guess(guess = guess))
                res = await stream.read()

                res_type = res.WhichOneof('result')
                if res_type == 'reason':
                    if res.reason == g.TOO_LOW:
                        lower = guess + 1
                    elif res.reason == g.TOO_HIGH:
                        upper = guess - 1
                    elif res.reason == g.TOO_MANY_TRIES:
                        print("Error: Too many tries.")
                        break
                    elif res.reason == g.INVALID_GUESS:
                        print("Error: Guess out of range.")
                        break
                elif res_type == 'instructions':
                    print(res.instructions)
                    return


asyncio.run(play_game())