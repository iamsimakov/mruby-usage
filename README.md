
# Download mruby

http://mruby.org/downloads/ - download and extract it

# Configure mruby

Add to `build_config.rb` line `conf.gem github: 'iij/mruby-env'` for available ENV object.
... and other what you need

# Build mruby

Run in source folder

`./minirake`

# Build example script

Run this command to export variable in current terminal session or add this line to your `~/.bashrc` or another shell rc file to use this var in the future(change to your extract mruby folder)

`export MRUBY_HOME=~/packages/mruby`

And start build your script

`$MRUBY_HOME/bin/mrbc -Bresender resender.rb && \`
`gcc main.c $MRUBY_HOME/build/host/lib/libmruby.a -I $MRUBY_HOME/include/ -o resender -lm`
