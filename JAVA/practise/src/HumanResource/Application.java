package HumanResource;

public class Applications {
    public void applyForJob(){
        System.out.println("Application submitted successfully");
    }
    public void addJob(String job){
        JobPortal jobPortal = new JobPortal();
        jobPortal.addJob(job);
    }
}