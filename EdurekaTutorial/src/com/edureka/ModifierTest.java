package com.edureka;

public class ModifierTest {
    public void test001() {
        System.out.println("this is test one public.");
        ModifierTest md = new ModifierTest();
        md.test002();
    }

    private void test002() {
        System.out.println("this is test two public.");
    }

    public String s = "nihal";

    @Override
    public String toString() {
        return s;
    }
}
