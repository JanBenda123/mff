## How to run the solution

The solution can be run as specified in `README.md`. No changes were made

## Documentation

The interactions of client with `IMap`s is almost always done using `EntryProcessor`, since almost all of them are pretty much instant and its blocking behaviour is not a problem. Only during document creation I chose to use `IExecutorService` to make it async and take care of possible race conditions.

Locking the whole is statement works, cause if document is in the cache, we only serialize the reads without any greater penalty and if it is not only the first thread to enter the critical section will have to generae the document and others simply read it from the cache.

For `CycleFavoritesProcessor` I used the fact that partitioning is done based on the key hash and two `IMap`s will have entries under the same key on the same node.

The LRU behavior of cache is specified in `resources/hazelcast.yaml`
