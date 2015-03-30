guard 'bundler' do
  watch('Gemfile')
end

guard 'rspec', cmd: 'rspec --color --format progress'  do
  watch(%r{^spec/.+_spec\.rb$})
  watch(%r{^lib/(.+)\.rb$}) { |m| "spec/#{m[1]}_spec.rb" }
end
