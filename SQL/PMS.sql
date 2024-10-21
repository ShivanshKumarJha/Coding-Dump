CREATE DATABASE ORG;
SHOW DATABASES;
USE ORG;

CREATE TABLE User (
    user_id INT PRIMARY KEY,
    name VARCHAR(255) NOT NULL,
    email VARCHAR(255) NOT NULL UNIQUE,
    password VARCHAR(255) NOT NULL,
    role VARCHAR(50),
    joining_date DATE
);


CREATE TABLE Team (
    team_id INT PRIMARY KEY,
    team_name VARCHAR(255) NOT NULL,
    manager_id INT,
    FOREIGN KEY (manager_id) REFERENCES User(user_id)
);

CREATE TABLE TeamMembers (
    team_id INT,
    member_id INT,
    PRIMARY KEY (team_id, member_id),
    FOREIGN KEY (team_id) REFERENCES Team(team_id),
    FOREIGN KEY (member_id) REFERENCES User(user_id)
);

CREATE TABLE Project (
    project_id INT PRIMARY KEY,
    name VARCHAR(255) NOT NULL,
    description TEXT,
    startDate DATE,
    endDate DATE,
    status VARCHAR(50),
    team_id INT,
    FOREIGN KEY (team_id) REFERENCES Team(team_id)
);

CREATE TABLE Task (
    task_id INT PRIMARY KEY,
    title VARCHAR(255) NOT NULL,
    description TEXT,
    assignedTo INT,
    status VARCHAR(50),
    due_date DATE,
    rating INT,
    project_id INT,
    FOREIGN KEY (assignedTo) REFERENCES User(user_id),
    FOREIGN KEY (project_id) REFERENCES Project(project_id)
);

CREATE TABLE Performance (
    performance_id INT PRIMARY KEY,
    task_id INT,
    user_id INT,
    FOREIGN KEY (task_id) REFERENCES Task(task_id),
    FOREIGN KEY (user_id) REFERENCES User(user_id)
);

CREATE TABLE Issue (
    issue_id INT PRIMARY KEY,
    team_id INT,
    raised_by INT,
    assigned_to INT,
    title VARCHAR(255) NOT NULL,
    description TEXT,
    status VARCHAR(50),
    raised_date DATE,
    resolved_date DATE,
    resolution_text TEXT,
    resolution_files TEXT,
    FOREIGN KEY (team_id) REFERENCES Team(team_id),
    FOREIGN KEY (raised_by) REFERENCES User(user_id),
    FOREIGN KEY (assigned_to) REFERENCES User(user_id)
);

CREATE TABLE Chat (
    chat_id INT PRIMARY KEY,
    team_id INT,
    messages TEXT,
    FOREIGN KEY (team_id) REFERENCES Team(team_id)
);

CREATE TABLE ChatMessages (
    message_id INT PRIMARY KEY,
    chat_id INT,
    content TEXT,
    attachments TEXT,
    timestamp TIMESTAMP,
    FOREIGN KEY (chat_id) REFERENCES Chat(chat_id)
);

CREATE TABLE ChatMembers (
    chat_id INT,
    member_id INT,
    PRIMARY KEY (chat_id, member_id),
    FOREIGN KEY (chat_id) REFERENCES Chat(chat_id),
    FOREIGN KEY (member_id) REFERENCES User(user_id)
);

CREATE TABLE TaskAssignments (
    task_id INT,
    user_id INT,
    PRIMARY KEY (task_id, user_id),
    FOREIGN KEY (task_id) REFERENCES Task(task_id),
    FOREIGN KEY (user_id) REFERENCES User(user_id)
);
