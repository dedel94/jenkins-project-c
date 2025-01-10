pipeline {
    agent {
        node {
            label 'new-agent'
        }
    }

    stages {
        stage('Continuous integration') {
            steps {
                git branch: 'main', url: 'https://github.com/fredericEducentre/jenkins-project-c.git'
            }
        }
        stage('controle de qualité') {
            steps {
                 sh '''
                sonar-scanner \
                    -Dsonar.projectKey=current \
                    -Dsonar.sources=. \
                    -Dsonar.host.url=http://192.168.1.5:9000 \
                    -Dsonar.token=sqp_d686be4c14dc0a8ccf7cde1044b422ec26e3a3df
                     '''
            }
        }
        stage('build') {
            steps {
                 sh "docker build . -t current_time_go"

            }
        }        
            
        
    }
}
