# Grading

- Local measurements: OK; 1.5 points
- Remote searcher: OK; 1.5 points
- Remote nodes: 1 point (0.5 points deducted)
    - You created two separate implementations of `Node` (`NodeImpl` and `NodeRemoteImpl`) instead of controlling export via `UnicastRemoteObject.exportObject`. You do not need two implementations; you can control whether an instance is serialized or sent as a proxy by calling `exportObject` as needed.
- Remote nodes and searcher: 1 point (0.5 points deducted)
    - The remote searcher does not ask the client to serialize nodes. The nodes live on the server as `NodeRemoteImpl` objects; the server-side searcher holds proxies to them and calls methods via RMI, which are handled by the same server. There is no RMI optimization for this - it is still much less efficient than direct local calls.
- Passing by value/reference: OK; 2 points
- Network impact: 1.5 points (0.5 points deducted)
    - The network impact analysis is very brief. You note that things slow down but do not provide specific explanations for the differences between variants under network conditions.

Total **8.5** points.

# Hash

The repository hash used in this grading is 1a24d7f26b1fb97257fc08b8f0be04c01948b39d.
