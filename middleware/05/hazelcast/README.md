# Install and run

Install the project:

```sh
mvn install
```

Run a member with an argument using `-Dexec.args=`

```sh
mvn exec:java@member -Dexec.args=argument
```

Run a client:

```sh
mvn exec:java@client
```
