MRuby::Gem::Specification.new('mruby-sdl') do |spec|
  spec.license = 'MIT'
  spec.author = 'Oscar Esgalha'
  spec.cc.flags << "`sdl2-config --cflags`"
  spec.linker.flags_before_libraries << "`sdl2-config --libs`"
end
