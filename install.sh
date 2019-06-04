mkdir .brew && curl -L https://github.com/Homebrew/brew/tarball/master | tar xz --strip 1 -C .brew

## install app brew
brew update
brew install valgrind
brew install ncurses
brew install sdl2
brew install sdl2-ttf

## create alias
echo "alias brew=\"~/./.brew/bin/brew\"" >> .zshrc
echo "alias valgrind=\"~/./.brew/bin/valgrind\"" >> .zshrc
