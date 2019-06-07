
# Download mruby

`wget "https://github.com/mruby/mruby/archive/2.0.1.zip" -O ~/packages/mruby-2.0.1.zip`

`unzip ~/packages/mruby-2.0.1.zip -d ~/packages/`

# Configure mruby

Add to `build_config.rb` line `conf.gem github: 'iij/mruby-env'` for available ENV object.
... and other what you need

# Build mruby

Run in source folder

`./minirake`

# Clone example repo

`git clone git@github.com:iamsimakov/mruby-usage.git && cd mruby-usage`

# Build example script

Run this command to export variable in current terminal session or add this line to your `~/.bashrc` or another shell rc file to use this var in the future(change to your extract mruby folder)

`export MRUBY_HOME=~/packages/mruby-2.0.1`

And start build your script

`$MRUBY_HOME/bin/mrbc -Bruby_start ruby_start.rb && gcc main.c $MRUBY_HOME/build/host/lib/libmruby.a -I $MRUBY_HOME/include/ -o run -lm`

Run script:

`./run`
