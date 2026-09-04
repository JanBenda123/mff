import grpc
import kulajda_pb2 as gss
import kulajda_pb2_grpc

class MetadataInterceptor(grpc.UnaryUnaryClientInterceptor):
    def __init__(self):
        pass

    def intercept_unary_unary(self, continuation, client_call_details, request):
        metadata = []
        if client_call_details.metadata is not None:
            metadata = list(client_call_details.metadata)
        metadata.append(('sis-login', 'bendaja1'))

        new_details = client_call_details._replace(metadata=metadata)
        return continuation(new_details, request)


class Product():
    def __init__(self, product_id, price):
        self.product_id = product_id
        self.price = price
        
with grpc.insecure_channel('lab.d3s.mff.cuni.cz:6001') as channel:
    interceptor = MetadataInterceptor()
    intercept_channel = grpc.intercept_channel(channel, interceptor)
    stub = kulajda_pb2_grpc.GroceryShoppingServiceStub(intercept_channel)

    response = stub.ViewProducts(gss.ViewProductsRequest())
    products = dict()
    for p in response.products:
        products[p.name] = Product(p.product_id, p.price.value)

    response = stub.CreateShoppingCart(gss.CreateShoppingCartRequest())
    cart_id = response.cart_id

    shopping_list = [("Potato", 5), ("Sour Cream", 1), ("Dill", 1), ("Egg", 4)]
    price  = 0

    for p in shopping_list:
        name_to_add = p[0]
        response = stub.AddProductToCart(
            gss.AddProductToCartRequest(cart_id = cart_id, 
                                        product_id = products[name_to_add].product_id,
                                        quantity = p[1]
                                        ))
        print(f"{name_to_add} added\tTotal price:{response.total_price}")  
    
    response = stub.Checkout(gss.CheckoutRequest(cart_id = cart_id))

    print(response.instructions)

