## Note
```bash
xmake create -l c++ -P pkpy-demo
cd pkpy-demo
xmake config -m debug
# build
xmake -D -y
# run (release)
xmake run
# run (debug)
xmake run -d pkpy-demo
```
