MRuby::Build.new do |conf|
  toolchain :gcc
  conf.gembox 'default'
  conf.gem "#{ENV["TRAVIS_BUILD_DIR"]}"
end
