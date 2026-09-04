# Grading

- Offers: 2 points (0.5 points deducted)
    - `availableGoods` is not synchronized in `processOffer`.
    - Using `synchronized(clientSession)` is unusual, JMS sessions are not designed to be locked externally. `synchronized` blocks on separate objects are error-prone, a single `synchronized(this)` would be simpler and safer.
- Account balance: OK; 2.5 points
- Basic sale protocol: OK; 2.5 points
- Robust sale protocol: OK; 2.5 points

Total **9.5** points.

# Hash

The repository hash used in this grading is 5d64233b4c5dfe66446b1cd5eea8390158233fcc.
