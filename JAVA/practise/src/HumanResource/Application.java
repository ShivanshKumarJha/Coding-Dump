package HumanResource;

public class Application {
    public void applyForJob(){
        System.out.println("Application submitted successfully");
    }

    public void addJob(String job){
        JobPortal jobPortal = new JobPortal();
        jobPortal.addJob(job);
    }
}