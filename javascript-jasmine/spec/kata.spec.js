'use strict';

describe('kata', function() {

  var kata;
  beforeEach(function() {
    kata = require('../lib/kata');
  });

  describe('Your first test', function() {

    it('does something meaningful', function() {
      expect(kata.prop1).toEqual('prop1');
    });

  });

});
