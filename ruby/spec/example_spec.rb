require 'example'

RSpec.describe Example do
  it 'should work' do
    expect(Example.new).to respond_to :dummy
  end
end
