package org.okiwi.codingdojo;

import org.junit.Assert;
import org.junit.Test;

public class KataTests {

    @Test
    public void kata_peut_commencer() {
        // arrange
        Integer un = 1;

        // act
        String result = "1";

        // assert
        Assert.assertEquals(result, un.toString());
    }
}
