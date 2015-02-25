MRuby::Build.new do |conf|
  toolchain :gcc
  conf.gembox 'default'
  conf.gembox "#{ENV["TRAVIS_BUILD_DIR"]}/sdl"
end
