package JavaClasses.OtherClassesPart2;

public enum EnumCustomValue {
    MONDAY(1, "First Value"),
    TUESDAY(2, "Second Value"),
    WEDNESDAY(3, "Third Value");

    private int val;
    private String comment;

    EnumCustomValue(int val, String comment) {
        this.val = val;
        this.comment = comment;
    }

    public int getVal(){
        return val;
    }

    public String getComment(){
        return comment;
    }

    public static EnumCustomValue valueOf(int name) {
        return EnumCustomValue.valueOf(name);
    }
}
